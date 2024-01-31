@class ATXPBShortcutsEditorEventMetadata;

@interface ATXShortcutsEditorEventMetadata : NSObject <NSSecureCoding, ATXProtoBufWrapper> {
    ATXPBShortcutsEditorEventMetadata *_proto;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long numStepsInShortcut;

- (id)initWithProto:(id)a0;
- (id)init;
- (unsigned long long)hash;
- (id)encodeAsProto;
- (id)proto;
- (id)initWithProtoData:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)jsonDict;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithNumStepsInShortcut:(unsigned long long)a0;
- (BOOL)isEqualToATXShortcutsEditorEventMetadata:(id)a0;

@end
