@class NSString, RPNearFieldTapEvent, RPIdentity, NSUUID, NSDate, NSError, RPTransportServiceHandoverMessage;
@protocol RPNFCTransactionDelegate;

@interface RPNFCTransaction : NSObject <NSSecureCoding, RPNearFieldTransaction>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic, getter=isConnected) BOOL connected;
@property (retain, nonatomic) RPNearFieldTapEvent *tapEvent;
@property (retain, nonatomic) RPIdentity *remoteIdentity;
@property (retain, nonatomic) RPTransportServiceHandoverMessage *remoteAuthenticationMessage;
@property (retain, nonatomic) RPTransportServiceHandoverMessage *remoteValidationMessage;
@property (weak, nonatomic) id<RPNFCTransactionDelegate> delegate;
@property (readonly, copy, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) NSDate *connectionDate;
@property (readonly, nonatomic) long long state;
@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) long long role;
@property (readonly, nonatomic) BOOL isInitiator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (void)setState:(long long)a0;
- (void).cxx_destruct;
- (void)setError:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithRole:(long long)a0;

@end
