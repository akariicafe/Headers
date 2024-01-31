@class NSData, PKASCAssociatedReaderIDReaderCA;

@interface PKASCAssociatedReaderID : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSData *readerID;
@property (nonatomic) unsigned long long priority;
@property (retain, nonatomic) PKASCAssociatedReaderIDReaderCA *readerCA;

- (unsigned long long)hash;
- (id)asDictionary;
- (void)encodeWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqualToASCAssociatedReaderID:(id)a0;

@end
