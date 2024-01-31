@interface AAiCloudTermsStringRequest : AAGenericTermsUIRequest

+ (Class)responseClass;

- (id)initWithAccount:(id)a0;
- (id)initWithAccount:(id)a0 preferPassword:(BOOL)a1;
- (id)initWithAccount:(id)a0 termsEntries:(id)a1 preferPassword:(BOOL)a2;

@end
