@class NSString, APOdmlServerResponse, NSNumber;

@interface APOdmlDESAdRecordContents : NSObject

@property (nonatomic) BOOL appInstalled;
@property (nonatomic) BOOL isDupe;
@property (readonly, nonatomic) NSString *instanceID;
@property (retain, nonatomic) APOdmlServerResponse *odmlResponse;
@property (retain, nonatomic) NSString *responseType;
@property (nonatomic) BOOL impressed;
@property (nonatomic) BOOL tapped;
@property (readonly, nonatomic) NSString *adamID;
@property (readonly, nonatomic) NSNumber *rerankingErrorCode;

- (void).cxx_destruct;
- (id)convertToDictionary;
- (id)initWithInstanceID:(id)a0 adamID:(id)a1 odmlResponse:(id)a2 appInstalled:(BOOL)a3 isDupe:(BOOL)a4 rerankingError:(id)a5;
- (void)updateRecordWithEvent:(long long)a0;

@end
