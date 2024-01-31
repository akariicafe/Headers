@class NSString, NSUUID, NSData, NSDate, NSSet;

@interface VCVoiceShortcutManagedObject : NSManagedObject

@property (copy, nonatomic) NSString *associatedAppBundleIdentifier;
@property (copy, nonatomic) NSDate *dateCreated;
@property (copy, nonatomic) NSDate *dateLastModified;
@property (copy, nonatomic) NSUUID *identifier;
@property (nonatomic) BOOL isMarkedAsDeleted;
@property (retain, nonatomic) NSData *keyImageData;
@property (copy, nonatomic) NSString *phrase;
@property (retain, nonatomic) NSData *serializedWorkflowData;
@property (copy, nonatomic) NSString *shortcutDescription;
@property (copy, nonatomic) NSString *shortcutName;
@property (retain, nonatomic) NSSet *syncStates;

+ (id)fetchRequest;

@end
