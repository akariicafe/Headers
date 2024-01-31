@class NSString, NSObject;
@protocol AVCMediaRecorderRequestDelegate;

@interface AVCMomentsRequest : NSObject

@property (nonatomic) NSObject<AVCMediaRecorderRequestDelegate> *delegate;
@property (nonatomic) unsigned char mode;
@property (readonly, nonatomic) NSString *transactionID;
@property (readonly, nonatomic) unsigned char mediaType;
@property (readonly, nonatomic) NSString *requesterID;
@property (readonly, nonatomic) NSString *requesteeID;

- (BOOL)validateWithError:(id *)a0;
- (void)dealloc;
- (BOOL)startWithError:(id *)a0;
- (id)description;
- (BOOL)rejectWithError:(id *)a0;
- (BOOL)endWithError:(id *)a0;
- (id)initWithMediaType:(unsigned char)a0 requesterID:(id)a1 requesteeID:(id)a2;
- (id)initWithMediaType:(unsigned char)a0 requesterID:(id)a1 requesteeID:(id)a2 transactionID:(id)a3;

@end
