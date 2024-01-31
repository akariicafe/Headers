@class NSDate, PKPeerPaymentRecipient;

@interface PKCacheRecipientItem : NSObject <NSSecureCoding> {
    NSDate *_insertDate;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) PKPeerPaymentRecipient *item;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)hasExpired;
- (id)initWithCoder:(id)a0;
- (id)initWithItem:(id)a0;
- (BOOL)isNewerThan:(id)a0;

@end
