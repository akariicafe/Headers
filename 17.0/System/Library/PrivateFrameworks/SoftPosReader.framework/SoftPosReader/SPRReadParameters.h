@class NSArray, NSData, NSString;

@interface SPRReadParameters : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long mode;
@property (readonly, copy, nonatomic) NSArray *vasRequests;
@property (readonly, copy, nonatomic) NSArray *vasProtocol;
@property (readonly, copy, nonatomic) NSArray *vasPasses;
@property (readonly, copy, nonatomic) NSArray *urls;
@property (readonly, nonatomic) struct { unsigned char _exponent : 8; unsigned char _length : 4; unsigned char _isNegative : 1; unsigned char _isCompact : 1; unsigned int _reserved : 18; unsigned short _mantissa[8]; } amount;
@property (readonly, copy, nonatomic) NSData *currencyCode;
@property (readonly, nonatomic) unsigned char transactionType;
@property (readonly, copy, nonatomic) NSData *merchantCategoryCode;
@property (readonly, copy, nonatomic) NSData *interfaceDeviceSerial;
@property (readonly, copy, nonatomic) NSString *kernelToken;
@property (readonly, nonatomic) long long timeoutReadPay;
@property (readonly, nonatomic) long long timeoutReadVas;
@property (readonly, copy, nonatomic) NSString *transactionId;
@property (readonly, copy, nonatomic) NSData *schemePreference;
@property (readonly, copy, nonatomic) NSArray *preferredSchemes;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithMode:(long long)a0 vasPasses:(id)a1 urls:(id)a2 amount:(struct { unsigned char x0 : 8; unsigned char x1 : 4; unsigned char x2 : 1; unsigned char x3 : 1; unsigned int x4 : 18; unsigned short x5[8]; })a3 currencyCode:(id)a4 transactionType:(unsigned char)a5 merchantCategoryCode:(id)a6 kernelToken:(id)a7 timeoutReadPay:(long long)a8 timeoutReadVas:(long long)a9;
- (id)initWithMode:(long long)a0 vasPasses:(id)a1 urls:(id)a2 amount:(struct { unsigned char x0 : 8; unsigned char x1 : 4; unsigned char x2 : 1; unsigned char x3 : 1; unsigned int x4 : 18; unsigned short x5[8]; })a3 currencyCode:(id)a4 transactionType:(unsigned char)a5 merchantCategoryCode:(id)a6 interfaceDeviceSerial:(id)a7 kernelToken:(id)a8 timeoutReadPay:(long long)a9 timeoutReadVas:(long long)a10;
- (id)initWithMode:(long long)a0 vasRequests:(id)a1 amount:(struct { unsigned char x0 : 8; unsigned char x1 : 4; unsigned char x2 : 1; unsigned char x3 : 1; unsigned int x4 : 18; unsigned short x5[8]; })a2 currencyCode:(id)a3 transactionType:(unsigned char)a4 merchantCategoryCode:(id)a5 interfaceDeviceSerial:(id)a6 kernelToken:(id)a7 timeoutReadPay:(long long)a8 timeoutReadVas:(long long)a9;
- (id)initWithMode:(long long)a0 vasRequests:(id)a1 amount:(struct { unsigned char x0 : 8; unsigned char x1 : 4; unsigned char x2 : 1; unsigned char x3 : 1; unsigned int x4 : 18; unsigned short x5[8]; })a2 currencyCode:(id)a3 transactionType:(unsigned char)a4 merchantCategoryCode:(id)a5 interfaceDeviceSerial:(id)a6 kernelToken:(id)a7 timeoutReadPay:(long long)a8 timeoutReadVas:(long long)a9 transactionId:(id)a10;
- (id)initWithMode:(long long)a0 vasRequests:(id)a1 amount:(struct { unsigned char x0 : 8; unsigned char x1 : 4; unsigned char x2 : 1; unsigned char x3 : 1; unsigned int x4 : 18; unsigned short x5[8]; })a2 currencyCode:(id)a3 transactionType:(unsigned char)a4 merchantCategoryCode:(id)a5 interfaceDeviceSerial:(id)a6 kernelToken:(id)a7 timeoutReadPay:(long long)a8 timeoutReadVas:(long long)a9 transactionId:(id)a10 preferredSchemes:(id)a11;
- (id)initWithMode:(long long)a0 vasRequests:(id)a1 amount:(struct { unsigned char x0 : 8; unsigned char x1 : 4; unsigned char x2 : 1; unsigned char x3 : 1; unsigned int x4 : 18; unsigned short x5[8]; })a2 currencyCode:(id)a3 transactionType:(unsigned char)a4 merchantCategoryCode:(id)a5 interfaceDeviceSerial:(id)a6 kernelToken:(id)a7 timeoutReadPay:(long long)a8 timeoutReadVas:(long long)a9 transactionId:(id)a10 schemePreference:(id)a11;

@end
