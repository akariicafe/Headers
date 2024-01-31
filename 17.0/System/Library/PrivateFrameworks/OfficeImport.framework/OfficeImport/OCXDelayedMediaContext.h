@class NSString, OCPPackage, NSURL;

@interface OCXDelayedMediaContext : NSObject <OCDDelayedMediaContext> {
    OCPPackage *mPackage;
    NSURL *mTargetLocation;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)dataRep;
- (id)initWithTargetLocation:(id)a0 package:(id)a1;
- (BOOL)loadDelayedNode:(id)a0;
- (BOOL)saveDelayedMedia:(id)a0 toFile:(id)a1;

@end
