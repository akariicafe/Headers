@class NSString, NSData, NSDate;

@interface UploadRecord : NSObject

@property (copy, nonatomic) NSString *uploadIdentifier;
@property (copy, nonatomic) NSData *payload;
@property (copy, nonatomic) NSString *timestampReferenceIdentifier;
@property (nonatomic) int uploadStatus;
@property (nonatomic) unsigned long long processedAttempts;
@property (copy, nonatomic) NSDate *dateCreated;
@property (copy, nonatomic) NSDate *dateLastProcessed;
@property (copy, nonatomic) NSDate *dateUploaded;
@property (nonatomic) unsigned long long size;
@property (copy, nonatomic) NSString *applicationIdentifier;

- (void).cxx_destruct;
- (id)outcomeTelemetryDictionary;

@end
