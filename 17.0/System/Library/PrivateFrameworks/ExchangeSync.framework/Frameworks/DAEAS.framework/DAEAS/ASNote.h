@class NSString, NSArray, NoteObject, NSDate, NSNumber;

@interface ASNote : ASChangedCollectionLeaf <ESDataElement>

@property (retain, nonatomic) NoteObject *localRecord;
@property (retain, nonatomic) NSString *body;
@property (retain, nonatomic) NSNumber *bodyTruncated;
@property (nonatomic) BOOL bodyIsPlaintext;
@property (retain, nonatomic) NSArray *categories;
@property (retain, nonatomic) NSString *subject;
@property (retain, nonatomic) NSString *messageClass;
@property (retain, nonatomic) NSDate *lastModifiedDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)parsingLeafNode;
+ (BOOL)acceptsTopLevelLeaves;
+ (id)asParseRules;
+ (id)externalRepClasses;
+ (BOOL)frontingBasicTypes;
+ (id)noteWithLocalNoteObject:(id)a0 serverID:(id)a1 account:(id)a2;
+ (BOOL)notifyOfUnknownTokens;
+ (BOOL)parsingWithSubItems;

- (void)encodeWithCoder:(id)a0;
- (long long)dataclass;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)deleteFromContainer:(void *)a0;
- (BOOL)loadLocalItemWithAccount:(id)a0;
- (BOOL)saveServerIDToExistingItem;
- (BOOL)saveWithLocalObject:(void *)a0 toContainer:(void *)a1 shouldMergeProperties:(BOOL)a2 outMergeDidChooseLocalProperties:(BOOL *)a3 account:(id)a4;
- (void)setLocalItem:(void *)a0;
- (void)loadClientIDs;
- (void)_loadAttributesFromLocalNoteObject:(id)a0 forAccount:(id)a1;
- (void)appendActiveSyncDataForTask:(id)a0 toWBXMLData:(id)a1;
- (BOOL)deleteFromNoteContext;
- (id)initWithLocalNoteObject:(id)a0 serverID:(id)a1 account:(id)a2;
- (BOOL)loadNoteObjectForAccount:(id)a0;
- (void)parseASParseContext:(id)a0 root:(id)a1 parent:(id)a2 callbackDict:(id)a3 streamCallbackDict:(id)a4 account:(id)a5;
- (void)postProcessApplicationData;
- (BOOL)saveServerIDToNoteDB;
- (BOOL)saveToNoteDBWithExistingRecord:(id)a0 intoNoteStore:(id)a1 shouldMergeProperties:(BOOL)a2 outMergeDidChooseLocalProperties:(BOOL *)a3 account:(id)a4;

@end
