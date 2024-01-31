@class NSString, NSArray, NSMutableDictionary, DTKPKDebugCodeSet;

@interface DTKTraceTapTriggerConfig : NSObject {
    NSMutableDictionary *_dict;
    DTKPKDebugCodeSet *_kdebugFilterSet;
}

@property (nonatomic) int kind;
@property (nonatomic) BOOL isAllProcesses;
@property (readonly, nonatomic) BOOL hasThreadStateFilter;
@property (nonatomic) unsigned long long eventLimitHint;
@property (readonly, retain, nonatomic) NSString *uuid;
@property (nonatomic) unsigned long long sampleInterval;
@property (retain, nonatomic) NSString *pmiEventMnemonic;
@property (retain, nonatomic) NSString *pmiCounterName;
@property (nonatomic) unsigned long long pmiEventThreshold;
@property (retain, nonatomic) NSArray *pmiDeviceIndices;
@property (retain, nonatomic) DTKPKDebugCodeSet *kdebugFilter;
@property (nonatomic) unsigned long long callstackFrameDepth;

+ (id)deviceSignPostConfig;

- (id)initWithPlist:(id)a0;
- (id)init;
- (id)plist;
- (id)initWithUUIDString:(id)a0;
- (void)addAction:(int)a0;
- (void).cxx_destruct;
- (void)setUuid:(id)a0;
- (id)_GetTriggerDict;
- (void)enumerateThreadStatesToInclude:(id /* block */)a0;
- (void)_SetTriggerDict:(id)a0;
- (void)enumerateActions:(id /* block */)a0;
- (void)enumeratePIDsInFilter:(id /* block */)a0;
- (void)includePID:(int)a0;
- (void)includeThreadState:(unsigned int)a0;
- (void)setHasThreadStateFilter:(BOOL)a0;

@end
