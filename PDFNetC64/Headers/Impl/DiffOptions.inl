// This file is autogenerated: please see the codegen template "Options"
namespace pdftron{ namespace PDF{ 

inline DiffOptions::DiffOptions()
	: m_obj_set()
	, m_dict()
{
	m_dict = m_obj_set.CreateDict();
}

inline DiffOptions::~DiffOptions()
{
}


inline GState::BlendMode DiffOptions::GetBlendMode()
{
	SDF::Obj found = m_dict.FindObj("BlendMode");
	if(!found.IsNull())
	{
		return (GState::BlendMode)(int)(found.GetNumber());
	}
	return (GState::BlendMode)(int)(5);
}

inline DiffOptions& DiffOptions::SetBlendMode(GState::BlendMode value)
{
	m_dict.PutNumber("BlendMode", (value));
	return *this;
}


inline ColorPt DiffOptions::GetColorA()
{
	SDF::Obj found = m_dict.FindObj("ColorA");
	if(!found.IsNull())
	{
		return OptionsBase::ColorPtFromNumber(found.GetNumber());
	}
	return OptionsBase::ColorPtFromNumber(0xFFCC0000);
}

inline DiffOptions& DiffOptions::SetColorA(ColorPt value)
{
	m_dict.PutNumber("ColorA", OptionsBase::ColorPtToNumber(value));
	return *this;
}


inline ColorPt DiffOptions::GetColorB()
{
	SDF::Obj found = m_dict.FindObj("ColorB");
	if(!found.IsNull())
	{
		return OptionsBase::ColorPtFromNumber(found.GetNumber());
	}
	return OptionsBase::ColorPtFromNumber(0xFF00CCCC);
}

inline DiffOptions& DiffOptions::SetColorB(ColorPt value)
{
	m_dict.PutNumber("ColorB", OptionsBase::ColorPtToNumber(value));
	return *this;
}


inline SDF::Obj& DiffOptions::GetInternalObj()
{
	return m_dict;
}

}
}