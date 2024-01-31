@class ABPK2dSkeleton;

@interface ABPKSinglePerson2DResult : NSObject

@property (readonly, nonatomic) ABPK2dSkeleton *skeleton2D;
@property (readonly, nonatomic) BOOL isPoseValid;
@property (readonly, nonatomic) unsigned int trackingId;

- (id)init;
- (void).cxx_destruct;
- (int)overlayResultOnImage:(SEL)a0 withResult:(struct __CVBuffer { } *)a1 withColor:(struct __CVBuffer { } *)a2;
- (void)set2dSkeleton:(id)a0 isPoseValid:(BOOL)a1 trackingId:(unsigned int)a2;

@end
