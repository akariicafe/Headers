@class NSString, NSURL, NSDate, NSNumber;

@interface DEDAttachmentItem : NSObject <DEDSecureArchiving>

@property (retain) NSString *deviceID;
@property (retain) NSString *displayName;
@property (retain) NSDate *modificationDate;
@property (retain) NSNumber *fileSize;
@property (retain) NSURL *attachedPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)archivedClasses;
+ (id)itemWithDEItem:(id)a0;
+ (id)itemWithDictionary:(id)a0;
+ (id)itemWithURL:(id)a0;

@end
