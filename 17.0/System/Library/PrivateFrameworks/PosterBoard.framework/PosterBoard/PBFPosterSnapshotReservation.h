@class NSString, NSURL, UIImage, NSError;
@protocol PBFDisplayContext;

@interface PBFPosterSnapshotReservation : NSObject <NSCopying, BSCancellable>

@property (readonly, nonatomic) NSURL *URL;
@property (readonly, nonatomic) id<PBFDisplayContext> displayContext;
@property (readonly, nonatomic) UIImage *image;
@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) BOOL isValid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)globalCache;
+ (void)noteAllSnapshotsWereReaped;
+ (void)noteSnapshotWasReaped:(id)a0;

- (void).cxx_destruct;
- (void)cancel;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)fetchImageWithError:(out id *)a0;
- (id)initWithURL:(id)a0 displayContext:(id)a1 image:(id)a2 error:(id)a3;

@end
