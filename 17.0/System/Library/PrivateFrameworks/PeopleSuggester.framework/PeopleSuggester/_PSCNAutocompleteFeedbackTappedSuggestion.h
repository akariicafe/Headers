@class _PSSuggestion;

@interface _PSCNAutocompleteFeedbackTappedSuggestion : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) _PSSuggestion *suggestion;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithSuggestion:(id)a0;

@end
