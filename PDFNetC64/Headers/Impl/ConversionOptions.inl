// This file is autogenerated: please see the codegen template "Options"
namespace pdftron{ namespace PDF{ 

ConversionOptions::ConversionOptions()
	: m_obj_set()
	, m_dict()
{
	m_dict = m_obj_set.CreateDict();
}

ConversionOptions::~ConversionOptions()
{
}

SDF::Obj& ConversionOptions::GetInternalObj()
{
	return m_dict;
}

}
}