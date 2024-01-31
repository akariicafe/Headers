@class NSString, NSData, NSDate;

@interface SiriReferenceResolutionDataModel.RRAnnotatedEntity : NSObject {
    void /* unknown type, empty encoding */ id;
    void /* unknown type, empty encoding */ appBundleId;
    void /* unknown type, empty encoding */ usoEntity;
    void /* unknown type, empty encoding */ dataType;
    void /* unknown type, empty encoding */ data;
    void /* unknown type, empty encoding */ group;
    void /* unknown type, empty encoding */ metadata;
    void /* unknown type, empty encoding */ saliencyComputedAt;
    void /* unknown type, empty encoding */ onScreenSaliencyAdjustment;
    void /* unknown type, empty encoding */ annotations;
    void /* unknown type, empty encoding */ userId;
}

@property (nonatomic, readonly) NSString *id;
@property (nonatomic, readonly) NSString *appBundleId;
@property (nonatomic, readonly) NSString *dataType;
@property (nonatomic, readonly) NSData *data;
@property (nonatomic) void /* unknown type, empty encoding */ score;
@property (nonatomic, copy) NSDate *saliencyComputedAt;
@property (nonatomic, copy) NSString *userId;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, copy) NSDate *mentionedAt;
@property (nonatomic, copy) NSDate *onscreenAt;
@property (nonatomic, copy) NSDate *nearbyAt;
@property (nonatomic, copy) NSDate *notificationReceivedAt;
@property (nonatomic, copy) NSDate *nowPlayingAt;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)setDateAnnotationWithKey:(id)a0 value:(id)a1;

@end
