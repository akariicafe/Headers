@class NSURL, NSNumber, NSString;

@interface ARAppClipCodeAnchor : ARAnchor <ARTrackable>

@property (copy, nonatomic) NSURL *url;
@property (retain, nonatomic) NSNumber *instanceID;
@property (nonatomic) float confidence;
@property (nonatomic) float radius;
@property (nonatomic) long long urlDecodingStateInternal;
@property (nonatomic) BOOL isScaleReliable;
@property (nonatomic) unsigned long long urlEncodingVersion;
@property (nonatomic) BOOL isTracked;
@property (readonly, nonatomic) long long urlDecodingState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithAnchor:(id)a0;
- (id)copyWithAppClipCodeResult:(id)a0 isTracked:(BOOL)a1;
- (id)copyWithTrackedState:(BOOL)a0;
- (id)initWithAppClipCodeResult:(id)a0 instanceID:(id)a1;

@end
