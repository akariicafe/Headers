@class CRTimestamp;
@protocol CRDataType;

@interface CRRegisterLatest : CRRegister {
    id<CRDataType> _contents;
}

@property (retain, nonatomic) CRTimestamp *timestamp;

- (id)contents;
- (void)walkGraph:(id /* block */)a0;
- (void)realizeLocalChangesIn:(id)a0;
- (void)setContents:(id)a0;
- (id)deltaSince:(id)a0 in:(id)a1;
- (void)encodeWithCRCoder:(id)a0;
- (void)_setContents:(id)a0;
- (id)description;
- (void)setDocument:(id)a0;
- (void).cxx_destruct;
- (void)mergeWith:(id)a0;
- (id)initWithCRCoder:(id)a0;
- (void)encodeIntoProtobufRegisterLatest:(void *)a0 coder:(id)a1;
- (id)initWithContents:(id)a0 document:(id)a1;
- (id)initWithContents:(id)a0 timestamp:(id)a1 document:(id)a2;
- (id)initWithProtobufRegisterLatest:(const void *)a0 decoder:(id)a1;
- (BOOL)isEqualContents:(id)a0;
- (void)mergeWithRegisterLatest:(id)a0;

@end
