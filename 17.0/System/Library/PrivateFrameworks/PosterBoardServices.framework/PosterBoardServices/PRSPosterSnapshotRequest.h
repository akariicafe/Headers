@class NSDictionary, NSString, PRSServerPosterPath;

@interface PRSPosterSnapshotRequest : NSObject <BSXPCSecureCoding>

@property (readonly, nonatomic) PRSServerPosterPath *path;
@property (readonly, copy, nonatomic) NSDictionary *requestOptions;
@property (nonatomic) double imageScaleRelativeToScreen;
@property (readonly, nonatomic) long long configurationType;
@property (readonly, nonatomic) long long variantType;
@property (readonly, nonatomic) unsigned long long options;
@property (readonly, nonatomic) long long orientation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)contaminateRequestOptions:(id)a0;
+ (id)sanitizeRequestOptions:(id)a0;
+ (BOOL)supportsBSXPCSecureCoding;
+ (id)validOptions;

- (unsigned long long)maxCount;
- (long long)configurationType;
- (id)initWithBSXPCCoder:(id)a0;
- (unsigned long long)options;
- (void).cxx_destruct;
- (void)encodeWithBSXPCCoder:(id)a0;
- (long long)variantType;
- (id)initWithFocusModeUUID:(id)a0 maxCount:(unsigned long long)a1;
- (BOOL)_validateRequestOptionsOrAbort:(BOOL)a0;
- (id)initWithConfiguration:(id)a0 variantType:(long long)a1 options:(unsigned long long)a2;
- (id)initWithConfiguration:(id)a0 variantType:(long long)a1 options:(unsigned long long)a2 orientation:(long long)a3;
- (id)initWithConfigurationType:(long long)a0 variantType:(long long)a1 options:(unsigned long long)a2;
- (id)initWithConfigurationType:(long long)a0 variantType:(long long)a1 options:(unsigned long long)a2 orientation:(long long)a3;
- (id)initWithFocusModeUUID:(id)a0 configurationType:(long long)a1 variant:(long long)a2 options:(unsigned long long)a3 maxCount:(unsigned long long)a4;
- (id)initWithFocusPosterRequest:(id)a0;
- (id)initWithPath:(id)a0 requestOptions:(id)a1;

@end
