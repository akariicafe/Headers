@class NSObject;
@protocol CKVSearchServiceProvider;

@interface CKVSearcherFactory : NSObject <CKVSearcherProvider> {
    NSObject<CKVSearchServiceProvider> *_serviceProvider;
}

+ (id)sharedSearcherFactory;

- (id)init;
- (id)initWithServiceProvider:(id)a0;
- (void).cxx_destruct;
- (id)makeSearcherForUserId:(id)a0 prewarm:(BOOL)a1;

@end
