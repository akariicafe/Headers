@class NSString, NSObject, UARPAccessoryMetadata;
@protocol OS_os_log;

@interface CHIPAccessoriesRecord : NSObject {
    NSObject<OS_os_log> *_log;
}

@property (readonly) NSString *accessoryListSignature;
@property (readonly) NSString *stonehengeCertificateID;
@property (readonly) NSString *installationGuideURLString;
@property (readonly) UARPAccessoryMetadata *accessoryMetadata;

- (void).cxx_destruct;
- (id)initWithCKRecord:(id)a0;
- (BOOL)createAccessoryMetadata:(id)a0;

@end
