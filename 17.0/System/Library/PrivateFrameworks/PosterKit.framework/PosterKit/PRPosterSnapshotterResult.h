@class NSString, PRSPosterPath, PRPosterSnapshotRequest, PRPosterSnapshotBundle, PRPosterSnapshotBundleBuilder;
@protocol BSInvalidatable;

@interface PRPosterSnapshotterResult : NSObject <NSSecureCoding, BSInvalidatable> {
    PRPosterSnapshotBundleBuilder *_snapshotBundleBuilder;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) PRPosterSnapshotRequest *request;
@property (readonly, nonatomic) double executionTime;
@property (readonly, nonatomic) PRSPosterPath<BSInvalidatable> *outputPath;
@property (readonly, nonatomic) PRPosterSnapshotBundle *snapshotBundle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (void)invalidate;
- (void).cxx_destruct;
- (void)finalizeWithError:(out id *)a0;
- (id)initWithCoder:(id)a0;
- (id)_snapshotBundleURL;
- (id)initWithRequest:(id)a0 snapshotBundleBuilder:(id)a1 executionTime:(double)a2;

@end
