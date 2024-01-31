@class NSUUID, NSString, NSArray, NSDate, NSSet, NSData, NSDictionary, HMCameraClipEncryptionContext;

@interface HMCameraClip : NSObject <HMFObject, NSCopying, NSSecureCoding, HMCameraRecordingEvent>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSString *streamingAssetVersion;
@property (readonly, copy) HMCameraClipEncryptionContext *encryptionContext;
@property (readonly, copy) NSArray *videoSegments;
@property (readonly, copy) NSUUID *uniqueIdentifier;
@property (readonly, copy) NSDate *startDate;
@property (readonly) double duration;
@property (readonly, getter=isComplete) BOOL complete;
@property (readonly, getter=isDonated) BOOL donated;
@property (readonly) long long quality;
@property (readonly) double targetFragmentDuration;
@property (readonly, copy) NSData *encryptionKey;
@property (readonly, copy) NSArray *videoDataSegments;
@property (readonly, copy) NSSet *significantEvents;
@property (readonly, copy) NSDictionary *videoAssetRequiredHTTPHeaders;
@property (readonly) BOOL canAskForUserFeedback;
@property (readonly, copy) NSString *shortDescription;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSDate *dateOfOccurrence;

+ (id)shortDescription;
+ (id)requiredHTTPHeadersForStreamingAssetVersion:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithUniqueIdentifier:(id)a0 startDate:(id)a1 duration:(double)a2 targetFragmentDuration:(double)a3 isComplete:(BOOL)a4 isDonated:(BOOL)a5 quality:(long long)a6 streamingAssetVersion:(id)a7 encryptionContext:(id)a8 videoSegments:(id)a9 significantEvents:(id)a10;

@end
