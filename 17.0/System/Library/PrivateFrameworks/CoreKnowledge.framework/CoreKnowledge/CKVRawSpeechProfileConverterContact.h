@class NSString, KVItemBuilder;

@interface CKVRawSpeechProfileConverterContact : NSObject <CKVRawSpeechProfileConverter> {
    KVItemBuilder *_builder;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)_companyContactFromSpeechWords:(id)a0 metadata:(id)a1 error:(id *)a2;
- (id)_standardContactFromSpeechWords:(id)a0 metadata:(id)a1 error:(id *)a2;
- (id)speechCategoryId;
- (id)vocabularyItemFromSpeechWords:(id)a0 metadata:(id)a1 speechNamespace:(id)a2 error:(id *)a3;

@end
