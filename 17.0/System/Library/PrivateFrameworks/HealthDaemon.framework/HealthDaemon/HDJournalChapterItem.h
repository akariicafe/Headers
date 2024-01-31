@class NSString, NSData;

@interface HDJournalChapterItem : NSObject <HDJournalChapterEntry>

@property (readonly, copy, nonatomic) NSString *entryClassName;
@property (readonly, copy, nonatomic) NSData *serializedEntryData;
@property (readonly, nonatomic) long long size;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)deserializedEntryWithError:(id *)a0;
- (id)initWithEntryClassName:(id)a0 serializedEntryData:(id)a1;

@end
