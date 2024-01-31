@class NSData, NSNumber;

@interface PKFelicaGreenCarTicket : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSData *originStation;
@property (readonly, copy, nonatomic) NSData *destinationStation;
@property (readonly, copy, nonatomic) NSNumber *validityStartDate;
@property (readonly, nonatomic, getter=isRefunded) BOOL refunded;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
