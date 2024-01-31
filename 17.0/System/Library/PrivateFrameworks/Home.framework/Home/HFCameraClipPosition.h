@class NSString, NAIdentity, NSDate, HMCameraClip;
@protocol HFCameraRecordingEvent;

@interface HFCameraClipPosition : NSObject <NAIdentifiable, NSCopying>

@property (class, readonly, nonatomic) NAIdentity *na_identity;

@property (readonly, nonatomic) id<HFCameraRecordingEvent> event;
@property (readonly, nonatomic) HMCameraClip *clip;
@property (readonly, nonatomic) double offset;
@property (readonly, copy, nonatomic) NSDate *date;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)positionWithClip:(id)a0 offset:(double)a1;
+ (id)positionWithEvent:(id)a0 offset:(double)a1;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithClip:(id)a0 offset:(double)a1;
- (id)initWithEvent:(id)a0 offset:(double)a1;

@end
