@class NSString, NSManagedObjectID;

@interface NotesAssistantFolderOption : NSObject

@property (retain, nonatomic) NSString *fullTitle;
@property (retain, nonatomic) NSString *accountTitle;
@property (retain, nonatomic) NSString *accountIdentifier;
@property (retain, nonatomic) NSManagedObjectID *managedObjectID;
@property (retain, nonatomic) NSString *identifierURIPathComponent;
@property (retain, nonatomic) NSString *parentTitle;
@property (retain, nonatomic) NSString *title;

+ (void)disambiguateFolderOptions:(id)a0;
+ (void)disambiguateSameTitleFolderOptions:(id)a0;

- (void).cxx_destruct;
- (id)debugDescription;
- (id)initWithLegacyFolder:(id)a0;
- (id)initWithModernFolder:(id)a0;

@end
