@class NSString, NSUUID, NSError, NSObject, FSResource;

@interface FSTaskDescription : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSObject *taskReferenceHolder;
@property (copy) NSString *taskInitiatorID;
@property (copy) NSString *taskSigningID;
@property (retain) NSObject *taskReferenceHolder;
@property (copy) NSString *taskInitiatorID;
@property (copy) NSString *taskSigningID;
@property (readonly, copy) NSUUID *taskID;
@property (readonly) unsigned char taskState;
@property (readonly, retain) NSError *taskErrorState;
@property (readonly, copy) NSString *taskBundleID;
@property (readonly, copy) NSUUID *taskExtensionInstanceID;
@property (readonly, copy) NSString *taskPurpose;
@property (readonly, copy) FSResource *taskResource;

+ (id)newWithID:(id)a0 state:(unsigned char)a1 purpose:(id)a2 error:(id)a3 bundleID:(id)a4 extensionID:(id)a5 resource:(id)a6;

@end
