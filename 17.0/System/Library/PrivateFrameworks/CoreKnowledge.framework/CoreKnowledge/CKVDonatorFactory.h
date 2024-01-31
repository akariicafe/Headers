@class NSObject;
@protocol KVDonateServiceProvider;

@interface CKVDonatorFactory : NSObject <CKVDonatorProvider> {
    NSObject<KVDonateServiceProvider> *_serviceProvider;
}

- (id)init;
- (id)initWithServiceProvider:(id)a0;
- (void).cxx_destruct;
- (id)donatorWithItemType:(long long)a0 originAppId:(id)a1 error:(id *)a2;
- (id)donatorWithItemType:(long long)a0 originAppId:(id)a1 userId:(id)a2 error:(id *)a3;

@end
