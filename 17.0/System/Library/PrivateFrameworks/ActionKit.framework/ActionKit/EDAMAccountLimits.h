@class NSNumber;

@interface EDAMAccountLimits : FATObject

@property (retain, nonatomic) NSNumber *userMailLimitDaily;
@property (retain, nonatomic) NSNumber *noteSizeMax;
@property (retain, nonatomic) NSNumber *resourceSizeMax;
@property (retain, nonatomic) NSNumber *userLinkedNotebookMax;
@property (retain, nonatomic) NSNumber *uploadLimit;
@property (retain, nonatomic) NSNumber *userNoteCountMax;
@property (retain, nonatomic) NSNumber *userNotebookCountMax;
@property (retain, nonatomic) NSNumber *userTagCountMax;
@property (retain, nonatomic) NSNumber *noteTagCountMax;
@property (retain, nonatomic) NSNumber *userSavedSearchesMax;
@property (retain, nonatomic) NSNumber *noteResourceCountMax;
@property (retain, nonatomic) NSNumber *userDeviceLimit;
@property (retain, nonatomic) NSNumber *userAdvertisedDeviceLimit;

+ (id)structName;
+ (id)structFields;

- (void).cxx_destruct;

@end
