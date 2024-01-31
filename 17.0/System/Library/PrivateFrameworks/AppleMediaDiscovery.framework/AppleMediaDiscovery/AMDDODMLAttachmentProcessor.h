@class NSData, NSMutableDictionary;

@interface AMDDODMLAttachmentProcessor : NSObject {
    NSMutableDictionary *_hashMapAttachments;
    NSMutableDictionary *_downSampleAttachments;
    NSMutableDictionary *_negSampleAttachements;
    NSData *_weightAttachment;
}

- (void).cxx_destruct;
- (id)readNegativeSampleArrayBytes:(id)a0 withAttachments:(id)a1 error:(id *)a2 errorDomain:(id)a3;
- (id)downSampleDictionaryForKey:(id)a0;
- (id)getURLFromURLArray:(id)a0 error:(id *)a1 errorDomain:(id)a2;
- (id)hashMapForKey:(id)a0;
- (id)initWithAttachmentURLs:(id)a0 withInstructions:(id)a1 error:(id *)a2 errorDomain:(id)a3;
- (id)initWithHashMapDictionary:(id)a0 withDownSampleDictionary:(id)a1 withNegSampleDictionary:(id)a2;
- (id)negSampleArrayForKey:(id)a0;
- (id)readDownSampleDictionary:(id)a0 withAttachments:(id)a1 error:(id *)a2 errorDomain:(id)a3;
- (id)readDownSampleDictionaryBytes:(id)a0 withAttachments:(id)a1 error:(id *)a2 errorDomain:(id)a3;
- (id)readHashMapDictionary:(id)a0 withAttachments:(id)a1 error:(id *)a2 errorDomain:(id)a3;
- (id)readHashMapDictionaryBytes:(id)a0 withAttachments:(id)a1 error:(id *)a2 errorDomain:(id)a3;
- (id)readNegativeSampleArray:(id)a0 withAttachments:(id)a1 error:(id *)a2 errorDomain:(id)a3;
- (id)readWeightsArrayBytes:(id)a0 withAttachments:(id)a1 error:(id *)a2 errorDomain:(id)a3;
- (id)setHashMap:(id)a0 forKey:(id)a1;
- (id)weightsArray;

@end
