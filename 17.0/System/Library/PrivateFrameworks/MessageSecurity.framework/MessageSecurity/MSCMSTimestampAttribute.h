@class MSCMSSignerInfo, NSArray, MSOID, NSURL, NSDate;

@interface MSCMSTimestampAttribute : NSObject <MSCMSAttributeCoder>

@property (retain) NSURL *serverURL;
@property BOOL certChainRequested;
@property (readonly) MSCMSSignerInfo *singerInfo;
@property (readonly) NSArray *certificates;
@property (readonly) MSOID *digestAlgorithm;
@property (readonly) NSDate *timestampTime;
@property (readonly, retain) MSOID *attributeType;

- (void).cxx_destruct;
- (id)initWithAttribute:(id)a0 error:(id *)a1;
- (id)initWithServerURL:(id)a0;
- (id)encodeAttributeWithError:(id *)a0;
- (id)initWithServerURL:(id)a0 chainRequested:(BOOL)a1;
- (id)initWithTimestampToken:(id)a0;
- (BOOL)verifyTimestamps:(id *)a0;

@end
