@class NSString;

@interface POKerberosStatus : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSString *ticketKeyPath;
@property (retain) NSString *realm;
@property (retain) NSString *cacheName;
@property (retain) NSString *upn;
@property BOOL importSuccessful;
@property BOOL exchangeRequired;
@property BOOL failedToConnect;

- (id)dataRepresentation;
- (void)encodeWithCoder:(id)a0;
- (id)initWithData:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)initWithCoder:(id)a0;

@end
