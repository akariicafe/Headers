@class NEIKEv2ConfigurationMessage;

@interface NEIKEv2ResponseConfigPayload : NEIKEv2ConfigPayload {
    NEIKEv2ConfigurationMessage *_configurationRequest;
}

- (void).cxx_destruct;
- (BOOL)parsePayloadData;

@end
