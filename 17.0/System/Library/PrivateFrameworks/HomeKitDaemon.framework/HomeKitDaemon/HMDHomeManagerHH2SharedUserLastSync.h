@class NSUUID, HMDUser, NSData, NSDate, NSString;

@interface HMDHomeManagerHH2SharedUserLastSync : HMFObject {
    NSDate *_creationDate;
    NSString *_archivePath;
}

@property (retain) NSUUID *homeUUID;
@property (retain) HMDUser *user;
@property (readonly, getter=isValid) BOOL valid;
@property (readonly) NSDate *creationDate;
@property (readonly) NSData *archive;

+ (id)shortDescription;

- (void)configure;
- (id)shortDescription;
- (id)privateDescription;
- (id)description;
- (void).cxx_destruct;
- (id)attributeDescriptions;
- (BOOL)isEqual:(id)a0;
- (id)initWithArchivePath:(id)a0;
- (void)removeArchiveFromLocalDisk;

@end
