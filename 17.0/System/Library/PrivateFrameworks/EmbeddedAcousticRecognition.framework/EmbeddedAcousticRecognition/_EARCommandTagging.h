@class NSString, NSArray;

@interface _EARCommandTagging : NSObject <NSCopying> {
    struct unique_ptr<quasar::CommandTagging, std::default_delete<quasar::CommandTagging>> { struct __compressed_pair<quasar::CommandTagging *, std::default_delete<quasar::CommandTagging>> { struct CommandTagging *__value_; } __ptr_; } _tagging;
}

@property (readonly, copy, nonatomic) NSString *commandId;
@property (readonly, copy, nonatomic) NSArray *tagSequence;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_initWithQuasarCommandTagging:(const void *)a0;
- (id)tokensForTag:(id)a0;

@end
