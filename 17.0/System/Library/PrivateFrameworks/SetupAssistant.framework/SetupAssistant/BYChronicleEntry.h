@class NSString;

@interface BYChronicleEntry : NSObject

@property (retain, nonatomic) NSString *productVersion;

- (id)init;
- (BOOL)isEqualToEntry:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (BOOL)createdOnCurrentMajorVersion;
- (id)initWithProductVersion:(id)a0;

@end
