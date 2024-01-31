@class NSString, NSMutableDictionary;
@protocol DTTapBulkDataReceiver;

@interface DTTapConfig : NSObject <NSCopying> {
    NSMutableDictionary *_dict;
}

@property (nonatomic) unsigned long long pollingInterval;
@property (readonly, nonatomic) BOOL isDeferredDisplay;
@property (nonatomic) unsigned long long bufferMode;
@property (nonatomic) unsigned long long windowSize;
@property (copy, nonatomic) NSString *serviceName;
@property (nonatomic) long long serviceVersion;
@property (retain, nonatomic) NSString *uuid;
@property (nonatomic) BOOL filePreservation;
@property (nonatomic) BOOL discardHeartbeatsWhenPossible;
@property (nonatomic) id<DTTapBulkDataReceiver> bulkDataReceiver;
@property (copy, nonatomic) id /* block */ runningMetadataChangedHandler;
@property (copy, nonatomic) id /* block */ statusHandler;
@property (copy, nonatomic) id /* block */ recordingInfoHandler;

- (id)initWithPlist:(id)a0;
- (id)init;
- (id)plist;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_dispatchStatus:(unsigned int)a0 timestamp:(unsigned long long)a1 notice:(id)a2 info:(id)a3;
- (id)_getSerializableObjectForKey:(id)a0;
- (void)_removeSerializableObjectForKey:(id)a0;
- (void)_runningMetadataChanged:(id)a0;
- (void)_setSerializableObject:(id)a0 forKey:(id)a1;
- (void)refreshUUID;
- (void)setIsDeferredDisplay:(BOOL)a0;
- (void)setSpoolToDiskWhenPossible:(BOOL)a0;
- (BOOL)spoolToDiskWhenPossible;

@end
