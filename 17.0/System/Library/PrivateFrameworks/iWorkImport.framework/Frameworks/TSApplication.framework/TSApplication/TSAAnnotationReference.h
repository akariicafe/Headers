@protocol TSKAnnotation;

@interface TSAAnnotationReference : NSObject

@property (retain, nonatomic) id<TSKAnnotation> annotation;
@property (nonatomic) unsigned long long pageIndex;

- (void).cxx_destruct;
- (BOOL)isValidAndInDocument;
- (BOOL)referencesAnnotation:(id)a0;

@end
