@class NSMutableData;

@interface CKDProtobufResponseBodyParser : CKDResponseBodyParser

@property (retain, nonatomic) NSMutableData *tailParserData;
@property (nonatomic) unsigned long long curObjectLength;
@property (nonatomic) BOOL isParsing;
@property (retain, nonatomic) Class messageClass;
@property (nonatomic) BOOL parsingStandaloneMessage;

- (void)finishWithCompletion:(id /* block */)a0;
- (void)processData:(id)a0;
- (BOOL)_parseObjectFromData:(id)a0 rawData:(id)a1;
- (void).cxx_destruct;
- (BOOL)_parseObjects:(BOOL)a0;
- (id)initWithQoS:(long long)a0 messageClass:(Class)a1 parsingStandaloneMessage:(BOOL)a2;

@end
