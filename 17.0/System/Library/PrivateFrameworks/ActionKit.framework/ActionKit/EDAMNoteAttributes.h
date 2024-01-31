@class NSString, EDAMLazyMap, NSDictionary, NSNumber;

@interface EDAMNoteAttributes : FATObject

@property (retain, nonatomic) NSNumber *subjectDate;
@property (retain, nonatomic) NSNumber *latitude;
@property (retain, nonatomic) NSNumber *longitude;
@property (retain, nonatomic) NSNumber *altitude;
@property (retain, nonatomic) NSString *author;
@property (retain, nonatomic) NSString *source;
@property (retain, nonatomic) NSString *sourceURL;
@property (retain, nonatomic) NSString *sourceApplication;
@property (retain, nonatomic) NSNumber *shareDate;
@property (retain, nonatomic) NSNumber *reminderOrder;
@property (retain, nonatomic) NSNumber *reminderDoneTime;
@property (retain, nonatomic) NSNumber *reminderTime;
@property (retain, nonatomic) NSString *placeName;
@property (retain, nonatomic) NSString *contentClass;
@property (retain, nonatomic) EDAMLazyMap *applicationData;
@property (retain, nonatomic) NSString *lastEditedBy;
@property (retain, nonatomic) NSDictionary *classifications;
@property (retain, nonatomic) NSNumber *creatorId;
@property (retain, nonatomic) NSNumber *lastEditorId;
@property (retain, nonatomic) NSNumber *sharedWithBusiness;
@property (retain, nonatomic) NSString *conflictSourceNoteGuid;
@property (retain, nonatomic) NSNumber *noteTitleQuality;

+ (id)structName;
+ (id)structFields;

- (void).cxx_destruct;

@end
