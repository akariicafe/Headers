@class NSString, MPAVErrorResolver;

@interface MPAVErrorResolverBlockHandler : NSObject <MPAVErrorResolverDelegate> {
    MPAVErrorResolverBlockHandler *_strongSelf;
}

@property (readonly, nonatomic) MPAVErrorResolver *errorResolver;
@property (copy, nonatomic) id /* block */ resolutionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
