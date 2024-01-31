@class NSUUID, NSString, ICCRDocument;

@interface ICCRWeakReference : NSObject <ICCRDataType, ICCRCoding>

@property (weak, nonatomic) ICCRDocument *document;
@property (retain, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) id contents;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)walkGraph:(id /* block */)a0;
- (id)tombstone;
- (void)realizeLocalChangesIn:(id)a0;
- (id)deltaSince:(id)a0 in:(id)a1;
- (void).cxx_destruct;
- (void)mergeWith:(id)a0;
- (id)initWithContents:(id)a0;
- (id)initWithContents:(id)a0 document:(id)a1;
- (void)encodeWithICCRCoder:(id)a0;
- (id)initWithICCRCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 document:(id)a1;

@end
