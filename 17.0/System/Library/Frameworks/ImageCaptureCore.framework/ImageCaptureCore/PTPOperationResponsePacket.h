@interface PTPOperationResponsePacket : NSObject {
    int _numParameters;
    unsigned short _responseCode;
    unsigned int _transactionID;
    unsigned int _parameters[5];
}

- (unsigned short)responseCode;
- (unsigned int)transactionID;
- (void)setResponseCode:(unsigned short)a0;
- (void)setTransactionID:(unsigned int)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned int)parameterAtIndex:(unsigned int)a0;
- (id)contentForTCP;
- (id)contentForUSB;
- (id)contentForUSBUsingBuffer:(void *)a0 capacity:(unsigned int)a1;
- (id)initWithResponseCode:(unsigned short)a0 transactionID:(unsigned int)a1;
- (id)initWithResponseCode:(unsigned short)a0 transactionID:(unsigned int)a1 numParameters:(unsigned int)a2 parameters:(unsigned int *)a3;
- (id)initWithResponseCode:(unsigned short)a0 transactionID:(unsigned int)a1 parameter1:(unsigned int)a2;
- (id)initWithResponseCode:(unsigned short)a0 transactionID:(unsigned int)a1 parameter1:(unsigned int)a2 parameter2:(unsigned int)a3;
- (id)initWithResponseCode:(unsigned short)a0 transactionID:(unsigned int)a1 parameter1:(unsigned int)a2 parameter2:(unsigned int)a3 parameter3:(unsigned int)a4;
- (id)initWithResponseCode:(unsigned short)a0 transactionID:(unsigned int)a1 parameter1:(unsigned int)a2 parameter2:(unsigned int)a3 parameter3:(unsigned int)a4 parameter4:(unsigned int)a5;
- (id)initWithResponseCode:(unsigned short)a0 transactionID:(unsigned int)a1 parameter1:(unsigned int)a2 parameter2:(unsigned int)a3 parameter3:(unsigned int)a4 parameter4:(unsigned int)a5 parameter5:(unsigned int)a6;
- (id)initWithTCPBuffer:(void *)a0;
- (id)initWithUSBBuffer:(void *)a0;
- (int)numParameters;
- (unsigned int)parameter1;
- (unsigned int)parameter2;
- (unsigned int)parameter3;
- (unsigned int)parameter4;
- (unsigned int)parameter5;
- (void)setNumParameters:(unsigned int)a0;
- (void)setParameter1:(unsigned int)a0;
- (void)setParameter2:(unsigned int)a0;
- (void)setParameter3:(unsigned int)a0;
- (void)setParameter4:(unsigned int)a0;
- (void)setParameter5:(unsigned int)a0;
- (void)setPparameter:(unsigned int)a0 atIndex:(unsigned int)a1;

@end
