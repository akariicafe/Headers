@class NSString;
@protocol SBEmbeddedDisplayProfileFactoryDelegate;

@interface SBEmbeddedDisplayProfileFactory : NSObject <EXBDisplayProfileDelegate> {
    id<SBEmbeddedDisplayProfileFactoryDelegate> _delegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
