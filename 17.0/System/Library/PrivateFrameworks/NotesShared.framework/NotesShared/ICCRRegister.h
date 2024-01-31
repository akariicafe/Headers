@class NSString, ICCRDocument;

@interface ICCRRegister : NSObject <ICCRDataType, ICCRCoding>

@property (retain, nonatomic) id contents;
@property (weak, nonatomic) ICCRDocument *document;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)registerWithType:(unsigned long long)a0 contents:(id)a1;
+ (id)registerWithType:(unsigned long long)a0 contents:(id)a1 document:(id)a2;

- (void)walkGraph:(id /* block */)a0;
- (id)tombstone;
- (void)realizeLocalChangesIn:(id)a0;
- (id)deltaSince:(id)a0 in:(id)a1;
- (void).cxx_destruct;
- (void)mergeWith:(id)a0;
- (id)initWithDocument:(id)a0;
- (BOOL)isEqualContents:(id)a0;
- (void)encodeWithICCRCoder:(id)a0;
- (id)initWithICCRCoder:(id)a0;

@end
