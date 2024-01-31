@class NSString, NSArray, NSData, NSDate;

@interface NSPDNSPacket : NSObject

@property (readonly) NSData *data;
@property (readonly) long long identifier;
@property (readonly) NSDate *timestamp;
@property (readonly) long long messageType;
@property (readonly) long long opCode;
@property (readonly) BOOL isAuthoritativeAnswer;
@property (readonly) BOOL isTruncated;
@property (readonly) BOOL isRecursionDesired;
@property (readonly) BOOL isRecursionAvailable;
@property (readonly) long long responseCode;
@property (readonly) NSString *responseCodeString;
@property (readonly) NSArray *queries;
@property (readonly) NSArray *answers;
@property (readonly) NSArray *authorities;
@property (readonly) NSArray *additionalRecords;

- (void).cxx_destruct;
- (id)initFromData:(id)a0;

@end
