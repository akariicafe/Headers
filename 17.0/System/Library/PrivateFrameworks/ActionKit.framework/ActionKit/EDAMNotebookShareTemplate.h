@class NSString, NSNumber, NSArray;

@interface EDAMNotebookShareTemplate : FATObject

@property (retain, nonatomic) NSString *notebookGuid;
@property (retain, nonatomic) NSNumber *recipientThreadId;
@property (retain, nonatomic) NSArray *recipientContacts;
@property (retain, nonatomic) NSNumber *privilege;

+ (id)structName;
+ (id)structFields;

- (void).cxx_destruct;

@end
