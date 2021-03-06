//
//  TuysSmartDeviceModel.h
//  TuyaSmartKit
//
//  Created by fengyu on 15/9/12.
//  Copyright (c) 2015年 Tuya. All rights reserved.
//

#ifndef TuyaSmart_TuyaSmartDeviceModel
#define TuyaSmart_TuyaSmartDeviceModel

#import "TYModel.h"
#import "TuyaSmartSchemaModel.h"

@interface TuyaSmartDeviceModel : TYModel

//设备唯一标识符
@property (nonatomic, strong) NSString     *devId;

//设备名称
@property (nonatomic, strong) NSString     *name;

//设备icon的地址
@property (nonatomic, strong) NSString     *iconUrl;

//设备的能力值
@property (nonatomic, assign) NSInteger    ability;

//设备在线状态
@property (nonatomic, assign) BOOL         isOnline;

//设备是否是分享的
@property (nonatomic, assign) BOOL         isShare;

//设备
@property (nonatomic, strong) NSString     *verSw;

//设备的当前dp点
@property (nonatomic, strong) NSDictionary *dps;

//产品唯一标识符
@property (nonatomic, strong) NSString     *productId;

//是否支持群组
@property (nonatomic, assign) BOOL         supportGroup;

//网关类型
@property (nonatomic, strong) NSString     *gwType;

//网关协议版本
@property (nonatomic, assign) double       pv;

//硬件基线版本
@property (nonatomic, assign) double       bv;

//设备经纬度
@property (nonatomic, strong) NSString     *latitude;
@property (nonatomic, strong) NSString     *longitude;

//设备的schema定义
@property (nonatomic, strong) NSString     *schema;
@property (nonatomic, strong) NSArray<TuyaSmartSchemaModel *> *schemaArray;

@property (nonatomic, strong) NSString     *runtimeEnv;

#pragma mark - 涂鸦智能 控制面板相关

@property (nonatomic, assign) BOOL         rnFind;
@property (nonatomic, assign) long         i18nTime;
@property (nonatomic, strong) NSString     *ui;
@property (nonatomic, strong) NSString     *uiId;
@property (nonatomic, strong) NSString     *uiVersion;
@property (nonatomic, strong) NSString     *uiPhase;
@property (nonatomic, strong) NSString     *uiType;
@property (nonatomic, strong) NSDictionary *uiConfig;
@property (nonatomic, strong) NSDictionary *panelConfig;

@property (nonatomic, strong) NSArray      *quickOpDps;
@property (nonatomic, strong) NSArray      *displayDps;
@property (nonatomic, strong) NSDictionary *displayMsgs;

@property (nonatomic, strong) NSString     *uuid;

@property (nonatomic, strong) NSString     *localKey;

@end

#endif
