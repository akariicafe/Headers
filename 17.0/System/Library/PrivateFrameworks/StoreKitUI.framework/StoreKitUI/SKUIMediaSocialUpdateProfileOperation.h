@class NSString, SKUIClientContext, NSMutableDictionary, NSNumber, NSLock;

@interface SKUIMediaSocialUpdateProfileOperation : SSVComplexOperation {
    SKUIClientContext *_clientContext;
    NSString *_entityType;
    NSNumber *_identifier;
    NSLock *_lock;
    NSMutableDictionary *_parameters;
    id /* block */ _outputBlock;
}

@property (copy) NSString *entityType;
@property (copy) NSNumber *identifier;
@property (copy) id /* block */ outputBlock;

- (void)main;
- (void).cxx_destruct;
- (id)_imageDictionaryFromPhotoUpload:(id)a0;
- (id)_requestBodyWithError:(id *)a0;
- (id)_requestWithError:(id *)a0;
- (id)initWithClientContext:(id)a0;
- (void)setValue:(id)a0 forProfileField:(id)a1;

@end
